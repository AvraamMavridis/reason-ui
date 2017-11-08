let component = ReasonReact.statelessComponent("Button");

let make = (~message, _children) => {
  ...component,
  render: (_self) => {
    <button label=message>
      (ReasonReact.stringToElement(message))
    </button>
  }
}