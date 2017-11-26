type action =
  | FetchData;

type drink = {
    id: int,
    img: string,
    name: string
};

type state = {
    drinks: list(drink)
};

module DrinkItem = {
    let component = ReasonReact.statelessComponent("DrinkItem");
    let make = (~drink, _children) => {
        ...component,
        render: (self) => {
            <div className="drink">
                <h3>(ReasonReact.stringToElement(drink.name))</h3>
            </div>
        }
    }
};

let component = ReasonReact.reducerComponent("Tile");

let make = ( _children) => {
    ...component,
    initialState: () => {
        drinks: [
            {
                id: 1,
                img: "http://placehold.it/200/200",
                name: "fake drink!"
            }
        ]
    },
    reducer: ((), _) => ReasonReact.NoUpdate,
    render: ({state: {drinks}}) =>
    <div className="tiles">
        (
            ReasonReact.arrayToElement(Array.of_list(
                List.map((drink) => <DrinkItem drink />, drinks)
            ))
        )
    </div>
};
